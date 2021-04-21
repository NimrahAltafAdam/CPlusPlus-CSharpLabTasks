using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabTask7_ImplementationOfOOPInCSharp_
{
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            txtResult.Text += 1.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            txtResult.Text += 2.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            txtResult.Text += 3.ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            txtResult.Text += 4.ToString();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            txtResult.Text += 5.ToString();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            txtResult.Text += 6.ToString();
        }

        private void button12_Click(object sender, EventArgs e)
        {
            txtResult.Text += 7.ToString();
        }

        private void button10_Click(object sender, EventArgs e)
        {
            txtResult.Text += 8.ToString();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            txtResult.Text += 9.ToString();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            txtResult.Text += 0.ToString();
        }
        int No1;
        int No2;
        char op;
        float result;
        private void Add_Click(object sender, EventArgs e)
        {
            No1 = Convert.ToInt32(this.txtResult.Text);
            txtResult.Clear();
            op = '+';

        }

        private void Equal_Click(object sender, EventArgs e)
        {
            if (op == '+')
            {
                No2 = Convert.ToInt32(this.txtResult.Text);
                txtResult.Clear();
                result = No1 + No2;
                txtResult.Text = result.ToString();
            }
            else if (op == '-')
            {
                No2 = Convert.ToInt32(this.txtResult.Text);
                txtResult.Clear();
                result = No1 - No2;
                txtResult.Text = result.ToString();
            }
            else if (op == '*')
            {
                No2 = Convert.ToInt32(this.txtResult.Text);
                txtResult.Clear();
                result = No1 * No2;
                txtResult.Text = result.ToString();
            }
            else if (op == '/')
            {
                No2 = Convert.ToInt32(this.txtResult.Text);
                txtResult.Clear();
                result = No1 / No2;
                txtResult.Text = result.ToString();
            }
        }

        private void Subtract_Click(object sender, EventArgs e)
        {
            No1 = Convert.ToInt32(this.txtResult.Text);
            txtResult.Clear();
            op = '-';
        }

        private void Multiply_Click(object sender, EventArgs e)
        {
            No1 = Convert.ToInt32(this.txtResult.Text);
            txtResult.Clear();
            op = '*';
        }

        private void Divide_Click(object sender, EventArgs e)
        {
            No1 = Convert.ToInt32(this.txtResult.Text);
            txtResult.Clear();
            op = '/';
        }

        private void button8_Click(object sender, EventArgs e)
        {
            txtResult.Clear();
            No1 = 0;
            No2 = 0;
        }
    }
}

