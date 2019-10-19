/**  
* <p>Title: Subject.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 20, 2019  
* @version 1.0  
*/  
package Observer_Pattern;

import java.util.ArrayList;
import java.util.List;

/**
 * Description
 */
public class Subject {
	private List<Observer> observers = new ArrayList<Observer>();
	private int state;
	public int getState() {
		return state;
	}
	public void setState(int state) {
		this.state = state;
		notifyAllObservers();
	}
	public void attach(Observer observer) {
		observers.add(observer);
	}
	public void notifyAllObservers() {
		for(Observer observer : observers) {
			observer.update();
		}
	}
}
