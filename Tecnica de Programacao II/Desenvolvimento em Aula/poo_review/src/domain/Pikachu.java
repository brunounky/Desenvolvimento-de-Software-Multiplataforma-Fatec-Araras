package domain;

import domain.interfaces.EletricType;

public class Pikachu extends Pokemon implements EletricType{

    public Pikachu(String nick, int cp, int hp) {
        super(nick, cp, hp);
    }

    @Override
    public void attack() {
        thunderbolt();
    }

    @Override
    public void thunderbolt() {
        System.out.println("Picachu executou o ataque thunderbolt");
    }

}
