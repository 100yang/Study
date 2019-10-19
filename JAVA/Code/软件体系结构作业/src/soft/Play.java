/**  
* <p>Title: Game.java</p>  
* <p>Description: 单机游戏</p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author yang
* @date Jun 6, 2019  
* @version 1.0  
*/
package soft;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Play {
	Stack<Character> stack = new Stack<Character>();
	Stack<Integer> numStack = new Stack<Integer>();
	int num1 = 1;
	int num2 = 2;
	String outputString = "";
	Context context = new Context();
	public Play(JTextField textField, JFrame jf) {
		while (numStack.isEmpty() == false) {
			numStack.pop();
		}
		while (stack.isEmpty() == false) {
			stack.pop();
		}
		// TODO Auto-generated constructor stub
		String string = String.valueOf(textField.getText());
		transform(string);
		System.out.println(outputString);
//		string = outputString;
//		System.out.println(string);
		System.out.println(get_ans(outputString));
		int ans = get_ans(outputString);
		JOptionPane.showMessageDialog(jf, ans);
	}

	public void transform(String str) {
		for (int i = 0; i < str.length(); ++i) {
			if ('0' <= str.charAt(i) && str.charAt(i) <= '9') {
				outputString += str.charAt(i);
				continue;
			}
			char top = (char) str.charAt(i);
			switch (top) {
			case '+':
			case '-':
				check(top, num1);
				break;
			case '*':
			case '/':
				check(top, num2);
				break;
			case '(':
				stack.push(top);
				break;
			case ')':
				check(top, num1);
				break;
			}
		}
		while (stack.isEmpty() == false) {
			outputString += stack.peek();
			stack.pop();
		}
	}

	public void check(char top, int num0) {
		int num = 0;
		while (stack.isEmpty() == false) {
			char s = stack.peek();
			if (top == ')') {
				if (s == '(') {
					stack.pop();
					break;
				}
				outputString += s;
				stack.pop();
				continue;
			}
			if (s == '*' || s == '/') {
				num = 2;
			} else if (s == '+' || s == '-') {
				num = 1;
			} else {
				num = 3;
			}
			if (num0 >= num) {
				outputString += s;
				stack.pop();
			}
			break;
		}
		if (top != ')')
			stack.push(top);
	}

	public int get_ans(String str) {
		int ans = 0;
		for (int i = 0; i < str.length(); ++i) {
			char top = (char) str.charAt(i);
			if ('0' <= top && top <= '9') {
				numStack.push(top - '0');
				continue;
			}
			num1 = numStack.pop();
			num2 = numStack.pop();
			String n1 = String.valueOf(num1);
			
			String n2 = String.valueOf(num2);
			context.add(n1, num1);
			context.add(n2, num2);
			System.out.print(ans + " " + num1 + " " + num2);
			System.out.println();
			switch (top) {
			case '+':
				Expression expression = 
				new AddExpression(new NumberExpression(n1),new NumberExpression(n2));
				//ans = expression.interpret(context);
				break;
			case '-':
				Expression expression1 = 
				new SubExpression(new NumberExpression(n1),new NumberExpression(n2));
				//ans = expression1.interpret(context);
				break;
			case '*':
				Expression expression2 = 
				new MulExpression(new NumberExpression(n1),new NumberExpression(n2));
				//ans = expression2.interpret(context);
				break;
			case '/':
				Expression expression3 = 
				new DivExpression(new NumberExpression(n1),new NumberExpression(n2));
				//ans = expression3.interpret(context);
				break;
			}
			numStack.push(ans);
			System.out.println(ans);
		}
		ans = numStack.pop();
		return ans;
	}
}
