import javax.swing.*;
import javax.swing.ImageIcon.*;
import java.awt.*;
import java.awt.event.*;
class Button_Label implements ActionListener
{
	static JFrame frame;
        public static void main(String args[])
	{
		frame=new JFrame("WatchDogs 2");
		frame.setSize(500,500);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setBackground(Color.white);
		frame.setLayout(new FlowLayout());
		JButton button=new JButton("Display");
		frame.add(button);
		Button_Image obj=new Button_Image();
		button.addActionListener(obj);
		frame.setVisible(true);
		Label text = new Label("Click on the Display Button");
		text.setBounds(100,50,200,30);
		frame.add(text);
	}
        public void actionPerformed(ActionEvent e)
	{
		ImageIcon icon=new ImageIcon("photo.png");
		JLabel label=new JLabel(icon);
		frame.add(label);
		frame.pack();
		frame.setSize(500,500);
	}
}