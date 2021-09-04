import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import javax.swing.*;
import javax.swing.JFrame;


/*
 </applet code="login" 
 */
public class login extends JFrame implements ActionListener
{       
        //Heading
        Label h1 = new Label("Welcome Folks");
	Label l1=new Label("StromTropper ID : ");
	
	Label l3=new Label(" "); //form submitted
	TextField t1=new TextField();
	//TextField t2=new TextField();
	Button b=new Button("submit");
    //combo box for bias
	Label c1=new Label("Rebell Base: ");
    String branches[]={"5251977","Cassidode VI rebel outpost","Crait outpost","Dantooine base","Resistance base","Tak-Beam complex","Hope Station","Horox III rebel outpost"};       
    JComboBox cb=new JComboBox(branches);
    //checkbox for ShadowTropper ScoutTropper
    Label cb1=new Label("You are a : ");
    Checkbox checkbox1 = new Checkbox("ShadowTropper");
    Checkbox checkbox2 = new Checkbox("ScoutTropper"); 
    //icon 
    Image icon = Toolkit.getDefaultToolkit().getImage("C://Users//manda//Desktop//spaceship.jpg");  
    //Image
    JLabel img1;
    
	public login()
	{
                
                
                //Image
		       img1 = new JLabel(new ImageIcon("C:/Users/manda/Desktop/tropper1.png"));  
		       img1.setBounds(35, 35, 400, 325);
		        
                
                //font for heading
                Font headFont = new Font("Serif",Font.BOLD,20);
                

                //Heading
                h1.setBounds(150,390,180,50);
                h1.setFont(headFont);
         

                //set co-ordinates 
		        l1.setBounds(35,475,100,30);
		        t1.setBounds(155,475,180,25);
		        

                //combo box
		        c1.setBounds(35, 510, 70, 30);
                cb.setBounds(200,510,180,25); 
                
                setLayout(null); 
                //checkbox
                cb1.setBounds(60, 540, 70, 50);
                checkbox1.setBounds(140,540, 110,50);  
                checkbox2.setBounds(280,540, 90,50);  
                setLayout(null);  
                //button
		        b.setBounds(135,600,90,50);
		        b.addActionListener(this);
		        
		        add(h1);
                add(l1);
		        add(t1);
		        add(b);
		        add(l3);
		        add(c1);
                add(cb);
                add(cb1);
                add(checkbox1);  
                add(checkbox2);  
                setIconImage(icon);  
                add(img1);
		        
	        	addWindowListener(new A());
	}
	public void actionPerformed(ActionEvent e)
	{ 
		l3.setText("FORM SUBMITTED "+t1.getText());
	}
	public static void main(String s[])
    {
		login l=new login();
		l.setSize(new Dimension(490,750));
		l.setTitle("Fan club");
		l.setVisible(true);
		
		}//end of main
}//end of class 
 class A extends WindowAdapter
{ 
	public A(){}
	public void WindowClosing(WindowEvent e)
   { 
	System.exit(0);
   }
}//end of class A