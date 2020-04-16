using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Order_System
{
    public partial class Form1 : Form
    {
        public int hamburger = 0, cheesb = 0, spicyb = 0, wrap = 0, water = 0, sparkly = 0, milkshake = 0, coke = 0, cake = 0, fchicken = 0,chips = 0, shrimp = 0;

        public int indx;
        public double hambprice = 5.25;
        public double cheesbprice = 6.25;
        public double cokeprice = 2;
        public double spicybprice = 6.50;
        public double wrapprice = 4.50;
        public double waterprice = 1.0;
        public double sparklyprice = 1.5;
        public double milkshprice = 4.75;
        public double cakeprice = 4.40;
        public double chickprice = 6.70;
        public double chipsprice = 3.35;
        public double shrimpprice = 5.50;

        public Form1()
        {
            InitializeComponent();
        }

        private void fonk(string a)
        {
            indx = -1;
            for (int i = 0; i < dataGridView1.RowCount; i++)
            {
                if (dataGridView1.Rows[i].Cells[0].Value.ToString() == a)
                    indx = i;
            }


            if (indx == -1)
            {
                dataGridView1.Rows.Add();
                indx = dataGridView1.RowCount - 1;
            }

        }

        


        /* Cheesburger + - */
        private void button4_Click(object sender, EventArgs e)
        {


            fonk("Cheeseburger");
            cheesb++;
            dataGridView1.Rows[indx].Cells[0].Value = "Cheeseburger";
            dataGridView1.Rows[indx].Cells[1].Value = cheesb;
            dataGridView1.Rows[indx].Cells[2].Value = cheesb * cheesbprice;

        }

       
        private void button3_Click(object sender, EventArgs e)
        {
            fonk("Cheeseburger");
            cheesb--;
            dataGridView1.Rows[indx].Cells[1].Value = cheesb;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - cheesbprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }


        /* Cheesburger ending + - */

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        


        /* Hamburger ending + - */

        private void button1_Click(object sender, EventArgs e)
        {

            fonk("Hamburger");

            hamburger--;
             dataGridView1.Rows[indx].Cells[1].Value = hamburger ;
             dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - hambprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);



            /* if((double.Parse(dataGridView1.Rows[0].Cells[1].Value.ToString())  <= 0) && (double.Parse(dataGridView1.Rows[0].Cells[2].Value.ToString())  <=0))
             {
                 /* dataGridView1.Rows[0].Cells[0].Value = "";
                  dataGridView1.Rows[0].Cells[1].Value = "";
                  dataGridView1.Rows[0].Cells[2].Value = "" 

                 indx = dataGridView1.RowCount -1;
                 dataGridView1.Rows.RemoveAt(indx); 
                 */
        }

        
        private void button2_Click(object sender, EventArgs e)
        {

            fonk("Hamburger");
                hamburger++;
                dataGridView1.Rows[indx].Cells[0].Value = "Hamburger";
                dataGridView1.Rows[indx].Cells[1].Value = hamburger;
                dataGridView1.Rows[indx].Cells[2].Value = hamburger * hambprice;

        }

        

        /* 
* 
* 
* 
* Hamburger ending + -
* 
*/

        
        /* Sp burger + - */

        private void button8_Click(object sender, EventArgs e)
        {
            fonk("Spicy Burger");
            spicyb++;
            dataGridView1.Rows[indx].Cells[0].Value = "Spicy Burger";
            dataGridView1.Rows[indx].Cells[1].Value = spicyb;
            dataGridView1.Rows[indx].Cells[2].Value = spicyb * spicybprice;
        }

        

        private void button7_Click(object sender, EventArgs e)
        {
            fonk("Spicy Burger");

            spicyb--;
            dataGridView1.Rows[indx].Cells[1].Value = spicyb;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - spicybprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

        

        private void button10_Click(object sender, EventArgs e)
        {
            fonk("Chicken Wrap");
            wrap++;
            dataGridView1.Rows[indx].Cells[0].Value = "Chicken Wrap";
            dataGridView1.Rows[indx].Cells[1].Value = wrap;
            dataGridView1.Rows[indx].Cells[2].Value = wrap * wrapprice;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            fonk("Chicken Wrap");

            wrap--;
            dataGridView1.Rows[indx].Cells[1].Value = wrap;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - wrapprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }
        /*wrap ending*/


                         /*/////////////////////////////// Drinks ////////////////////////////*/

        /* Coca cola + - */

        private void button23_Click(object sender, EventArgs e)
        {
            fonk("Coca-Cola");
            coke++;
            dataGridView1.Rows[indx].Cells[0].Value = "Coca-Cola";
            dataGridView1.Rows[indx].Cells[1].Value = coke;
            dataGridView1.Rows[indx].Cells[2].Value = coke * cokeprice;
        }

        

        private void button24_Click(object sender, EventArgs e)
        {
            fonk("Coca-Cola");

            coke--;
            dataGridView1.Rows[indx].Cells[1].Value = coke;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - cokeprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

        




        /*coke ending + - */


        /*
        *  
        * water*/
        private void button21_Click(object sender, EventArgs e)
        {
            fonk("Water");
            water++;
            dataGridView1.Rows[indx].Cells[0].Value = "Water";
            dataGridView1.Rows[indx].Cells[1].Value = water;
            dataGridView1.Rows[indx].Cells[2].Value = water * waterprice;
        }

       

        private void button22_Click(object sender, EventArgs e)
        {
            fonk("Water");

            water--;
            dataGridView1.Rows[indx].Cells[1].Value = water;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - waterprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

                     /*Water end*/
       
         /*
         * 
         * 
         * Sparkly Water*/
        private void button17_Click(object sender, EventArgs e)
        {
            fonk("Sparkly Water");
            sparkly++;
            dataGridView1.Rows[indx].Cells[0].Value = "Sparkly Water";
            dataGridView1.Rows[indx].Cells[1].Value = sparkly;
            dataGridView1.Rows[indx].Cells[2].Value = sparkly * sparklyprice;
        }

        

        private void button18_Click(object sender, EventArgs e)
        {
            fonk("Sparkly Water");

            sparkly--;
            dataGridView1.Rows[indx].Cells[1].Value = sparkly;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - sparklyprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

        

        /*Sparkly End*/

        /*
         * 
         * 
         * Milkshake */

        private void button15_Click(object sender, EventArgs e)
        {
            fonk("Milkshake");
            milkshake++;
            dataGridView1.Rows[indx].Cells[0].Value = "Milkshake";
            dataGridView1.Rows[indx].Cells[1].Value = milkshake;
            dataGridView1.Rows[indx].Cells[2].Value = milkshake * milkshprice;
        }

        

        private void button16_Click(object sender, EventArgs e)
        {
            fonk("Milkshake");

            milkshake--;
            dataGridView1.Rows[indx].Cells[1].Value = milkshake;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - milkshprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }
        /*Milkshake End*/

        /*///////////////////////// Appetizers //////////////////////////////////*/

        /*
         * 
         * 
         * 
         * Cake */
        private void button59_Click(object sender, EventArgs e)
        {
            fonk("Cake");
            cake++;
            dataGridView1.Rows[indx].Cells[0].Value = "Cake";
            dataGridView1.Rows[indx].Cells[1].Value = cake;
            dataGridView1.Rows[indx].Cells[2].Value = cake * cakeprice;
        }

       

        private void button60_Click(object sender, EventArgs e)
        {
            fonk("Cake");

            cake--;
            dataGridView1.Rows[indx].Cells[1].Value = cake;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - cakeprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }
                                /*Cake End*/

             /* 
              * 
              * 
              * Fried Chicken*/

        private void button53_Click(object sender, EventArgs e)
        {
            fonk("Fried Chicken");
            fchicken++;
            dataGridView1.Rows[indx].Cells[0].Value = "Fried Chicken";
            dataGridView1.Rows[indx].Cells[1].Value = fchicken;
            dataGridView1.Rows[indx].Cells[2].Value = fchicken * chickprice;
        }

        private void button54_Click(object sender, EventArgs e)
        {
            fonk("Fried Chicken");

            fchicken--;
            dataGridView1.Rows[indx].Cells[1].Value = fchicken;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - chickprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

        private void button57_Click(object sender, EventArgs e)
        {
            fonk("Chips");
            chips++;
            dataGridView1.Rows[indx].Cells[0].Value = "Chips";
            dataGridView1.Rows[indx].Cells[1].Value = chips;
            dataGridView1.Rows[indx].Cells[2].Value = chips * chipsprice;
        }

        private void button58_Click(object sender, EventArgs e)
        {
            fonk("Chips");

            chips--;
            dataGridView1.Rows[indx].Cells[1].Value = chips;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - chipsprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }

        private void button51_Click(object sender, EventArgs e)
        {
            fonk("Shrimps");
            shrimp++;
            dataGridView1.Rows[indx].Cells[0].Value = "Shrimps";
            dataGridView1.Rows[indx].Cells[1].Value = shrimp;
            dataGridView1.Rows[indx].Cells[2].Value = shrimp * shrimpprice;
        }

        private void button52_Click(object sender, EventArgs e)
        {
            shrimp--;
            dataGridView1.Rows[indx].Cells[1].Value = shrimp;
            dataGridView1.Rows[indx].Cells[2].Value = double.Parse(dataGridView1.Rows[indx].Cells[2].Value.ToString()) - shrimpprice;
            if (dataGridView1.Rows[indx].Cells[1].Value.ToString() == "0")
                dataGridView1.Rows.RemoveAt(indx);
        }
                
                /*/////// Status Bar /////////////*/

            /*File Status*/


        private void fileToolStripMenuItem_MouseHover(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "Opens and Saves Files";
        }

        private void fileToolStripMenuItem_MouseLeave(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = "";
        }
        
        
        /*Edit status*/


        private void editToolStripMenuItem_MouseHover(object sender, EventArgs e)
            {
               toolStripStatusLabel1.Text = "Editing Options";
            }

            private void editToolStripMenuItem_MouseLeave(object sender, EventArgs e)
            {
                toolStripStatusLabel1.Text = "";
            }

        /*Help status*/

              private void helpToolStripMenuItem_MouseHover(object sender, EventArgs e)
                 {
                     toolStripStatusLabel1.Text = "Help and FAQ";
                 }

              private void helpToolStripMenuItem_MouseLeave(object sender, EventArgs e)
                  {
                        toolStripStatusLabel1.Text = "";
                  }
    }
}
