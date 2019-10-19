/**  
* <p>Title: DicExpression.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author yang
* @date Jun 20, 2019  
* @version 1.0  
*/
package soft;

/**
 * 
 */
public class DivExpression implements Expression {
	private Expression left, right;

	public DivExpression(Expression left, Expression right) {
		this.left = left;
		this.right = right;
	}

	public Double interpret(Context context) {
		return left.interpret(context) / right.interpret(context);
	}
}
