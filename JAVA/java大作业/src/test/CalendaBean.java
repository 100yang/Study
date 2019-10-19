/**  
* <p>Title: CalendaBean.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月19日  
* @version 1.0  
*/  
package test;

/**  
* <p>Title: CalendaBean</p>  
* <p>Description: 日历显示 
* @author 100110100  
* @date 2018年12月19日  
*/
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Calendar;
import java.util.GregorianCalendar;

import javax.swing.*;
public class CalendaBean implements ActionListener {
	JLabel[] label;
	JLabel now;
	String[] day;
	int year = 0, month = 0;
	public void setYear(int year) {
		this.year = year;
	}
 
	public void setMonth(int month) {
		this.month = month;
	}
 
	public void actionPerformed(ActionEvent e) {
		String str = e.getActionCommand();
		if (str.equals("lastmonth")) {
			month--;
			if (month == 0) {
				month = 12;
				year--;
			}
		}
		else if (str.equals("nextmonth")) {
			month++;
			if (month == 13) {
				month = 1;
				year++;
			}
		}
		now.setText("日历:" + year + "年" + month + "月");
		String[] a = getCalendar();
		for (int i = 0; i < a.length; i++) {
			label[i].setText("          "+a[i]);
		}
		
	}
 
	public String[] getCalendar() {
		String[] a = new String[42];
		//定义一个Calender对象
		Calendar rili = Calendar.getInstance();
		rili.set(year, month - 1, 1);
		int weekDay = rili.get(Calendar.DAY_OF_WEEK) - 1;
        GregorianCalendar mon1 = new GregorianCalendar();
		int day = mon1.getActualMaximum(Calendar.DAY_OF_MONTH);
		for (int i = 0; i < weekDay; i++)
			a[i] = " ";
		for (int i = weekDay, n = 1; i < weekDay + day; i++) {
			a[i] = String.valueOf(n);
			n++;
		}
		for (int i = weekDay + day; i < a.length; i++)
			a[i] = " ";
		return a;
	}
}