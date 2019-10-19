package Factory_Design;

import java.util.Scanner;
/**
 * 
 * Description:
 * 工厂模式（Factory Pattern）是 Java 中最常用的设计模式之一。
 * 这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
 * 在工厂模式中，我们在创建对象时不会对客户端暴露创建逻辑，
 * 并且是通过使用一个共同的接口来指向新创建的对象。
 * 意图：定义一个创建对象的接口，让其子类自己决定实例化哪一个工厂类，工厂模式使其创建过程延迟到子类进行。
 * 主要解决：主要解决接口选择的问题。
 * 何时使用：我们明确地计划不同条件下创建不同实例时。
 * 如何解决：让其子类实现工厂接口，返回的也是一个抽象的产品。
 * 关键代码：创建过程在其子类执行。
 * 
 * 
 * 
 * 
 * 使用该工厂，通过传递类型信息来获取实体类的对象。
 */
public class Factory {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		String str = cin.next();
		ShapeFactory sp = new ShapeFactory();
		Shape sp1 = sp.getShape(str);
		sp1.draw();
		str = cin.next();
		sp1 = sp.getShape(str);
		sp1.draw();
	}
	
}
