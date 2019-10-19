/**  
* <p>Title: Context.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author yang
* @date Jun 20, 2019  
* @version 1.0  
*/  
package soft;

import java.util.HashMap;
import java.util.Map;

/**
 * 
 */
public class Context {
	private HashMap<String, Double> variables = new HashMap<String, Double>();
	public Double get(String name) {
		return variables.get(name);
	}
	public void add(String name, double value) {
		variables.put(name, value);
	}
}
