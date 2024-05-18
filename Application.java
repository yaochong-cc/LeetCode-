//
//abstract class Animal {
//    public abstract void cry();
//    public abstract String getAnimalName();
//}
//
//
//class Simulator {
//    public void playSound(Animal animal) {
//        System.out.println("现在播放"+animal.getAnimalName() + " 类的声音：");
//        animal.cry();
//    }
//}
//
//
//class Dog extends Animal {
//    @Override
//    public void cry() {
//        System.out.println("汪汪...汪汪");
//    }
//
//    @Override
//    public String getAnimalName() {
//        return "狗";
//    }
//}
//
//class Cat extends Animal {
//    @Override
//    public void cry() {
//        System.out.println("喵喵...喵喵");
//    }
//
//    @Override
//    public String getAnimalName() {
//        return "猫";
//    }
//}
//
//public class Application {
//    public static void main(String[] args) {
//        Simulator simulator = new Simulator();
//        simulator.playSound(new Dog());
//        simulator.playSound(new Cat());
//    }
//}
//
//
//
//
