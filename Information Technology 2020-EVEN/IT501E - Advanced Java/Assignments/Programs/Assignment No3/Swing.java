import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.util.Scanner;
import java.awt.Color;

class Swing extends JFrame implements ActionListener {

    JButton jb1;
    JTextField jt1;
    JLabel lbl, lb3;
    
    Swing() {

	lb3 = new JLabel("Enter number");
        lb3.setForeground(Color.WHITE);
        lb3.setBounds(160, 50, 150, 60);
        add(lb3);

        jt1 = new JTextField();
        jt1.setBounds(160, 100, 150, 30);
        add(jt1);


        lbl = new JLabel("Result :");
        lbl.setForeground(Color.WHITE);
        lbl.setBounds(160, 140, 150, 30);
        add(lbl);

	
        jb1 = new JButton("Check");
        jb1.setBounds(160, 200, 100, 30);
        add(jb1);

        jb1.addActionListener(this);

        setLayout(null);
        setSize(600, 400);
        setVisible(true);
        setTitle("Prime Number");
        getContentPane().setBackground(Color.BLACK);
    }

    public void actionPerformed(ActionEvent e)  
{
	try
	{
	Registry reg = LocateRegistry.getRegistry("localhost",3333);
        prime pd = (prime)reg.lookup("Hii Server");
        int a = Integer.parseInt(jt1.getText());
        
        String c;

        if (e.getSource().equals(jb1)) {
            c = pd.prime(a);
            lbl.setText("Result : "+ String.valueOf(c));
            lbl.setForeground(Color.WHITE);
        }
	}catch(RemoteException p)
	{
		System.out.println("Exception"+e);
	}catch(NotBoundException q)
	{
		System.out.println("Exception"+e);
	}
    }

    public static void main(String args[]) throws RemoteException ,NotBoundException
    {
        Swing t = new Swing();
	
    }
}