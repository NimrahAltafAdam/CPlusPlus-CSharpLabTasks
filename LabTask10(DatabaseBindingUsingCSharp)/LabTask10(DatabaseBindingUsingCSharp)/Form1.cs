using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabTask10_DatabaseBindingUsingCSharp_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int counter = 0;
        OleDbConnection con = new OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/USER/Documents/Database2.mdb");
        OleDbDataAdapter adap = new OleDbDataAdapter("select* from bank", "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/USER/Documents/Database2.mdb");
        DataSet d1 = new DataSet("bank");

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'database2DataSet4.bank' table. You can move, or remove it, as needed.
            this.bankTableAdapter.Fill(this.database2DataSet4.bank);
            con.Open();
            adap.Fill(d1, "bank");

        }

        private void button1_Click(object sender, EventArgs e)
        {
            //next
            if (counter < d1.Tables["bank"].Rows.Count - 1)
            {
                counter = counter + 1;
                textBox1.Text = d1.Tables["bank"].Rows[counter]["AccountNo"].ToString();
                textBox2.Text = d1.Tables["bank"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["bank"].Rows[counter]["Balance"].ToString();
                comboBox1.Text = d1.Tables["bank"].Rows[counter]["Branch"].ToString();

            }
            else if (counter <= d1.Tables["bank"].Rows.Count - 1)
            {
                MessageBox.Show("You are already on last record");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //previous
            if (counter > 0)
            {
                counter = counter - 1;
                textBox1.Text = d1.Tables["bank"].Rows[counter]["AccountNo"].ToString();
                textBox2.Text = d1.Tables["bank"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["bank"].Rows[counter]["Balance"].ToString();
                comboBox1.Text = d1.Tables["bank"].Rows[counter]["Branch"].ToString();
                string c = comboBox1.Items[comboBox1.SelectedIndex].ToString();
                comboBox1.Items.Add(c);
            }
            else
            {
                MessageBox.Show("You are already on the first record");
            }
        }
        private void button6_Click(object sender, EventArgs e)
        {
            Form2 f2 = new Form2();
            f2.Show();
        }
        private void button3_Click(object sender, EventArgs e)
        {
            OleDbCommand com1 = new OleDbCommand("Insert into bank(AccountNo,Name, Branch, Balance) values('" + textBox1.Text + "','" + textBox2.Text + "','" + comboBox1.Text + "','" + textBox3.Text + "')", con);
            com1.ExecuteNonQuery();
            MessageBox.Show(" One record has been added");
        }
        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox3.Text = "";
            comboBox1.Text = "";
        }
        private void button4_Click(object sender, EventArgs e)
        {
            OleDbCommand com = new OleDbCommand("Update bank set Balance='" + textBox3.Text + "' where AccountNo=@AccountNo", con);
            com.Parameters.Add("AccountNo", OleDbType.Integer).Value = textBox1.Text;
            com.ExecuteNonQuery();
            MessageBox.Show(" One record has been updated");

        }

        private void button5_Click(object sender, EventArgs e)
        {
            con.Close();
        }
    }
