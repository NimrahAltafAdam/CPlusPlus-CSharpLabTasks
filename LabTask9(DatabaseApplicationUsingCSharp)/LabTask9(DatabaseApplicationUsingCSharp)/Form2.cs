using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;

namespace LabTask9_DatabaseApplicationUsingCSharp_
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        OleDbConnection con = new OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/Hp/Desktop/DB/db for c.mdb");
        OleDbDataAdapter adap = new OleDbDataAdapter("select * from Student", "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/Hp/Desktop/DB/db for c.mdb");
        DataSet ds = new DataSet("student");

        private void Form2_Load(object sender, EventArgs e)
        {
            con.Open();
            OleDbCommand com = new OleDbCommand("select Name from Student", con);
            OleDbDataReader read = com.ExecuteReader();
            while (read.Read())
            {
                comboBox1.Items.Add(read["Name"].ToString());
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            OleDbDataAdapter adapt = new OleDbDataAdapter("select * from Student where Name='" + comboBox1.Text + "'", con);
            DataSet d2 = new DataSet();
            adapt.Fill(d2, "Student");
            dataGrid1.DataSource = d2;
        }
        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                OleDbCommand command = new OleDbCommand();
                command.Connection = con;
                command.CommandText = "Delete from student where ID=" + comboBox1.Text + "";
                command.ExecuteNonQuery();
                MessageBox.Show("Your desired record has been deleted");
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error " + ex);
            }
            con.Close();
        }
    }
}

