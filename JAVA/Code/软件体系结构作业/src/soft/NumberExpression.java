/**  
* <p>Title: NumExpression.java</p>  
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
public class NumberExpression implements Expression {
	public String name;

	public NumberExpression(String name) {
		this.name = name;
	}
	public Double interpret(Context context) {
		return context.get(name);
	}
}

