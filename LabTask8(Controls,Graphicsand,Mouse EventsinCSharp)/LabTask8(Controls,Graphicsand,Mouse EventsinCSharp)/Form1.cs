using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//Q1) Create an array of Buttons that would display buttons dynamically at run time.

namespace LabTask8_Controls_Graphicsand_Mouse_EventsinCSharp_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Button[] b = new Button[6];

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackColor = Color.WhiteSmoke;
            for (int i = 0; i <= b.Length - 1; i++)
            {
                b[i] = new Button();
                b[i].Text = "button" + i;
                b[i].Size = new Size(70, 30);
                b[i].BackColor = Color.CornflowerBlue;
                b[i].Location = new Point(i + 70, i + 100);
                b[i].Left = 60 * i;
                b[i].Top = 80 * i;

                this.Controls.Add(b[i]);
            }
        }
    }    
}

