package domain;

import domain.interfaces.EletricType;
import domain.interfaces.FlayingType;

public class Zapdos extends Pokemon implements EletricType, FlayingType{

    public Zapdos(String nick, int cp, int hp) {
        super(nick, cp, hp);
    }

    @Override
    public void wingAttack() {
        System.out.printf("% aplicou o ataque wingAttack", getNick());
            getNick();
    }

    @Override
    public void thunderbolt() {
        System.out.printf("% aplicou o ataque thunderbolt", getNick());
            getNick();
    }

    @Override
    public void attack() {
        wingAttack();
        thunderbolt();
    }
    
}
