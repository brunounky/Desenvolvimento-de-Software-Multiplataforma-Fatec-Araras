package domain;

// Classe é uma estrutura que define atributos e comportamentos

public class Pikachu {

    //Atributos

    public String nick;
    public int cp;
    public int hp;

    //Comportamentos

    public Pikachu(String nick, int cp, int hp){
        this.nick = nick;
        this.cp = cp;
        this.hp = hp;
    }

    public void iChooseYou() {
        System.out.println(x:"Eu estolho voce");
    }

    public void comeBack() {
        System.out.println(x:"Come back...");
    }

}
