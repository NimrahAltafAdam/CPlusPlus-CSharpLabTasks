using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//Q3) Using Mouse up, down and Mouse move events, Create an application that can draw freehand drawing.

namespace LabTask8_Controls_Graphicsand_Mouse_EventsinCSharp_
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }
        bool draw;
        private void Form3_Load(object sender, EventArgs e)
        {
        }
        private void Form3_MouseMove(object sender, MouseEventArgs e)
        {
            if (draw == true)


            {
                Graphics g = base.CreateGraphics();
                SolidBrush sb = new SolidBrush(Color.BlueViolet);
                g.FillEllipse(sb, e.X, e.Y, 10, 10);
            }
        }
        private void Form3_MouseDown(object sender, MouseEventArgs e)
        {
            draw = true;
        }
        private void Form3_MouseUp(object sender, MouseEventArgs e)
        {
            draw = false;
        }
    }
}

