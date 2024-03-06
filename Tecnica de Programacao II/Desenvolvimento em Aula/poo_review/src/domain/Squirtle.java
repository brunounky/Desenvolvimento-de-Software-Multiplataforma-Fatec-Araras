package domain;

import domain.interfaces.WaterType;

public class Squirtle extends Pokemon implements WaterType{

    public Squirtle(String nick, int cp, int hp) {
        super(nick, cp, hp);
    }

    @Override
    public void attack() {
        splash();
    }

    @Override
    public void splash() {
        System.out.println("Squirtle executou o ataque splash");
    }
    
}
