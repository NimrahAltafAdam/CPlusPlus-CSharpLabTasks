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
    public partial class Form1 : Form
    {
        OleDbConnection con = new OleDbConnection(&quot; Provider=Microsoft.Jet.OLEDB.4.0;Data
         Source = C:/Users/Hp/Desktop/DB/db for c.mdb&quot;);
        OleDbDataAdapter adap = new OleDbDataAdapter(&quot; Select* from student&quot;,
        &quot;Provider=Microsoft.Jet.OLEDB.4.0;Data Source = C:/Users/Hp/Desktop/DB/db for c.mdb&quot;);
         DataSet ds = new DataSet(&quot; Student&quot;);
          int counter = 0;

        public Form1()
        {
            InitializeComponent();
            adap.Fill(ds);
        }
        private void button1_Click(object sender, EventArgs e)
        {
            con.Open();

            if (counter & gt; 0)
{
                counter = 0;
                textBox1.Text = ds.Tables[0].Rows[counter][&quot; ID & quot;].ToString();
                textBox2.Text = ds.Tables[0].Rows[counter][&quot; Name & quot;].ToString();
                textBox3.Text = ds.Tables[0].Rows[counter][&quot; Phone & quot;].ToString();
                textBox4.Text = ds.Tables[0].Rows[counter][&quot; Address & quot;].ToString();
                textBox5.Text = ds.Tables[0].Rows[counter][&quot; dptid & quot;].ToString();
            }
else
            {
                MessageBox.Show(&quot; You are already on the first record & quot;);
            }
            con.Close();
        }
        private void button13_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                OleDbDataAdapter adapt = new OleDbDataAdapter(&quot; select student.ID , dept.dptid from
            student inner join dept on dept.dptid = student.dptid & quot;, con);
                DataSet ds2 = new DataSet();
                adapt.Fill(ds2);
                OleDbDataAdapter adapt2 = new OleDbDataAdapter(&quot; select courses.cname,emp.empname
                 from emp inner join courses on emp.empno = courses.empno & quot;, con);
                adapt2.Fill(ds2, &quot; employee & quot;);
                dataGrid2.DataSource = ds2;
                con.Close();
            }
            catch (Exception ex)

            {
                MessageBox.Show(&quot; Error + &quot; +ex);
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            con.Open();
            try
            {
                textBox1.Text = ds.Tables[0].Rows[0][&quot; ID & quot;].ToString();
                textBox2.Text = ds.Tables[0].Rows[0][&quot; Name & quot;].ToString();
                textBox3.Text = ds.Tables[0].Rows[0][&quot; Phone & quot;].ToString();
                textBox4.Text = ds.Tables[0].Rows[0][&quot; Address & quot;].ToString();
                textBox5.Text = ds.Tables[0].Rows[0][&quot; dptid & quot;].ToString();
            }
            catch (Exception ex)
            {
                MessageBox.Show(&quot; Error & quot; +ex);
            }
            con.Close();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            con.Open();
            dataGrid1.DataSource = ds;
            con.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            con.Open();
            if (counter & gt; 0)
{
                counter -= 1;
                textBox1.Text = ds.Tables[0].Rows[counter][&quot; ID & quot;].ToString();
                textBox2.Text = ds.Tables[0].Rows[counter][&quot; Name & quot;].ToString();
                textBox3.Text = ds.Tables[0].Rows[counter][&quot; Phone & quot;].ToString();
                textBox4.Text = ds.Tables[0].Rows[counter][&quot; Address & quot;].ToString();
                textBox5.Text = ds.Tables[0].Rows[counter][&quot; dptid & quot;].ToString();
            }
else
            {
                MessageBox.Show(&quot; You are already on the first record & quot;);
            }
            con.Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            con.Open();
            if (counter & lt; ds.Tables[0].Rows.Count - 1)
{
                counter = ds.Tables[0].Rows.Count - 1;
                textBox1.Text = ds.Tables[0].Rows[0][&quot; ID & quot;].ToString();
                textBox2.Text = ds.Tables[0].Rows[0][&quot; Name & quot;].ToString();
                textBox3.Text = ds.Tables[0].Rows[0][&quot; Phone & quot;].ToString();
                textBox4.Text = ds.Tables[0].Rows[0][&quot; Address & quot;].ToString();
                textBox5.Text = ds.Tables[0].Rows[0][&quot; dptid & quot;].ToString();

            }
            con.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            con.Open();
            if (counter & lt; ds.Tables[0].Rows.Count - 1)
{
                counter = counter + 1;
                textBox1.Text = ds.Tables[0].Rows[counter][&quot; ID & quot;].ToString();
                textBox2.Text = ds.Tables[0].Rows[counter][&quot; Name & quot;].ToString();
                textBox3.Text = ds.Tables[0].Rows[counter][&quot; Phone & quot;].ToString();
                textBox4.Text = ds.Tables[0].Rows[counter][&quot; Address & quot;].ToString();
                textBox5.Text = ds.Tables[0].Rows[counter][&quot; dptid & quot;].ToString();
            }
else
            {
                MessageBox.Show(&quot; You are on the last record&quot;);
            }
            con.Close();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Form2 f2 = new Form2();
            this.Hide();
            f2.Show();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Form3 f3 = new Form3();
            this.Hide();
            f3.Show();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Form4 f4 = new Form4();
            this.Hide();
            f4.Show();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                OleDbCommand command = new OleDbCommand();
                command.Connection = con;
                command.CommandText = &quot; Delete from student where ID = &quot; +textBox1.Text + &quot; &quot; ;
                command.ExecuteNonQuery();
                MessageBox.Show(&quot; Your desired record has been deleted&quot;);
            }
            catch (Exception ex)
            {
                MessageBox.Show(&quot; Error & quot; +ex);
            }
            con.Close();

        }

        private void button12_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                OleDbCommand command = new OleDbCommand();
                command.Connection = con;
                command.CommandText = &quot; update student set Address = &#39;Lahore&#39; where ID=&quot; + textBox1.Text
+&quot; &quot; ;
                command.ExecuteNonQuery();
                MessageBox.Show(&quot; Your record has been updated & quot;);
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(&quot; Error & quot; +ex);
            }
        }

        private void button10_Click(object sender, EventArgs e)
        {
            con.Open();
            OleDbCommand com = new OleDbCommand();
            com.Connection = con;
            com.CommandText = &quot; insert into student(ID, Name, Address, dptid)
        values(&quot; +textBox1.Text + &quot;,&#39;&quot;+textBox2.Text+&quot;&#39;,&quot;+textBox3.Text+&quot;,&#39;&quot;+textBox3.Text+&quot;&#39;,&#39;&quot;+textBox4.Text+&quot;&#39;,
&quot; +textBox5.Text + &quot;)&quot; ;
            com.ExecuteNonQuery();
            MessageBox.Show(&quot; New record has been added & quot;);

            con.Close();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
