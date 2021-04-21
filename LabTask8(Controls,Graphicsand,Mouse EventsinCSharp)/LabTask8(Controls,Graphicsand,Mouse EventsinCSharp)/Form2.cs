using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//Q2) Q2) Create a slideshow of pictures by using picture box control and timer control. Make a folder on any drive containing all of your pictures, you want to include in a slideshow. Rename all the pictures starting with 1.jpg, 2.jpg… n.jpg.

namespace LabTask8_Controls_Graphicsand_Mouse_EventsinCSharp_
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }
        int count = 1;
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (count == 7)
            {
                count = 1;
            }
            pictureBox1.ImageLocation = string.Format(@"d:/{0}.png", count);
            count++;
        }
    }
}


