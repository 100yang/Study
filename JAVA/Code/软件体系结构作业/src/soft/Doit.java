/**  
* <p>Title: Doit.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author yang
* @date Jun 20, 2019  
* @version 1.0  
*/
package soft;

import java.util.Stack;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

/**
 * 
 */
public class Doit {
	char s[] = { '+', '-', '*', '/' };
	String outputString = "";

	public Doit(JTextField textField, JFrame jf) {
		// TODO Auto-generated constructor stub
		String string = String.valueOf(textField.getText());
		transform(string);
		System.out.println(outputString);
		String ans = compute(outputString);
		textField.setText(outputString);
		JOptionPane.showMessageDialog(jf, ans);
//		string = outputString;
//		System.out.println(string);
//		System.out.println(get_ans(outputString));
//		int ans = get_ans(outputString);
//		JOptionPane.showMessageDialog(jf, ans);
	}

		private void transform(String str) {
			for (int i = 0; i < str.length(); ++i) {
				for (int j = 0; j < 4; ++j) {
					if (str.charAt(i) == s[j]) {
						outputString += " " + s[j] + " ";// 如果碰到运算符，就在运算符前后分别加一个空格，
						// 为后面的分解字符串做准备
						break;
					}
				}
				if ('0' <= str.charAt(i) && str.charAt(i) <= '9') {
					outputString += str.charAt(i);
				}
			}
		}

		private String compute(String str) {
			// TODO Auto-generated method stub
			Context context = new Context();
			String array[];
			array = str.split(" ");
			Stack<Double> s = new Stack<Double>();
			Double a = Double.parseDouble(array[0]);
			s.push(a);
			String n1,n2;
			for (int i = 1; i < array.length; i++) {
				if ((i % 2) == 1) {
					if (array[i].compareTo("+") == 0) {
						double b = Double.parseDouble(array[i + 1]);
						s.push(b);
					}
					if (array[i].compareTo("-") == 0) {
						double b = Double.parseDouble(array[i + 1]);
						s.push(-b);
					}
					if (array[i].compareTo("*") == 0) {
						double b = Double.parseDouble(array[i + 1]);
						double c = s.pop();
						n1 = String.valueOf(b);
						n2 = String.valueOf(c);
						context.add(n1, b);
						context.add(n2, c);
						Expression expression2 = 
								new MulExpression(new NumberExpression(n1),new NumberExpression(n2));
						c = expression2.interpret(context);
						s.push(c);
					}
					if (array[i].compareTo("/") == 0) {
						double b = Double.parseDouble(array[i + 1]);
						double c = s.peek();
						n1 = String.valueOf(b);
						n2 = String.valueOf(c);
						context.add(n2, b);
						context.add(n1, c);
						Expression expression3 = 
								new DivExpression(new NumberExpression(n1),new NumberExpression(n2));
						c = expression3.interpret(context);
						s.pop();
						s.push(c);
					}
				}
			}
			double sum = 0;
			while (!s.isEmpty()) {
				double num = s.pop();
				n1 = String.valueOf(num);
				n2 = String.valueOf(sum);
				context.add(n1, num);
				context.add(n2, sum);
				Expression expression = 
						new AddExpression(new NumberExpression(n1),new NumberExpression(n2));
				sum = expression.interpret(context);
				//sum += s.pop();
			}
			String result = String.valueOf(sum);
			return result;
		}
}
