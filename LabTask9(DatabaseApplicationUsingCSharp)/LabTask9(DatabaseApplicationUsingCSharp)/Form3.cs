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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        OleDbConnection con = new OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/Hp/Desktop/DB/db for c.mdb");
        OleDbDataAdapter adap = new OleDbDataAdapter("Select * from emp", "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:/Users/Hp/Desktop/DB/db for c.mdb");
        DataSet ds = new DataSet();

        private void Form4_Load(object sender, EventArgs e)
        {
            con.Open();
            adap.Fill(ds);
            OleDbCommand cmd = new OleDbCommand("select * from emp", con);
            OleDbDataReader reader = cmd.ExecuteReader();
            while (reader.Read())
            {
                comboBox1.Items.Add(reader["empname"].ToString());
            }
            con.Close();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            con.Open();
            OleDbDataAdapter adapter = new OleDbDataAdapter();
            OleDbCommand comm = new OleDbCommand("select courses.cname,emp.empname from emp inner join courses on emp.empno = courses.empno where empname='" + comboBox1.Text + "'", con);
            adapter.SelectCommand = comm;
            DataSet ds1 = new DataSet();
            adapter.Fill(ds1, "employee");
            dataGrid1.DataSource = ds1.Tables["employee"];
            con.Close();
        }
    }
}

