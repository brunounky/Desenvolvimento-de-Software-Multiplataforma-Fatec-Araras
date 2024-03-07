import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

import domain.Charmander;
import domain.Pikachu;
import domain.Pokemon;
import domain.Squirtle;
import domain.Zapdos;
import domain.interfaces.EletricType;

public class App {
    public static void main(String[] args) throws Exception {
        Pikachu pikachu = new Pikachu("Pikachu", 1500, 112);
        Charmander charmander = new Charmander("Pikachu", 800, 90);
        Squirtle squirtle = new Squirtle("Pikachu", 790, 87);
        Zapdos zapdos = new Zapdos("Zapdos", 790, 87);

        List<Pokemon> pokemons = Arrays.asList(pikachu, charmander, squirtle, zapdos);

            for (Pokemon pokemon : pokemons){
                System.out.println();
                System.out.println(pokemon);
                pokemon.attack();
            }

            Zapdos pokemon = new Zapdos("Zapdos", 1000, 120);
            pokemon.thunderbolt();
            pokemon.wingAttack();
    }
}
