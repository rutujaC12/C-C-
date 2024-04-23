import javax.swing.*; 
import java.awt.event.ActionEvent; 
import java.awt.event.ActionListener; 

public class SwingGUIApp { 

	public static void main(String[] args) 
	{ 

	JFrame frame = new JFrame("Swing GUI Example"); 

	JButton button = new JButton("Click Me!"); 

	 JLabel label = new JLabel("Button Clicked: 0"); 
		
	frame.add(button); 
	frame.add(label); 

	frame.setLayout(new java.awt.FlowLayout()); 
	
	int[] clickCount = { 0 }; // Array to store the click count  
	button.addActionListener(new ActionListener() 
	{ 	
		public void actionPerformed(ActionEvent e) { 
			clickCount[0]++; 
			label.setText("Button Clicked: " + clickCount[0]); 
		} 
	}); 
	
	frame.setSize(300, 100); 
	frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
	
	frame.setVisible(true); 
	} 
}
