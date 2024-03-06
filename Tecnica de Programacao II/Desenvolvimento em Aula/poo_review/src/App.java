import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

import domain.Charmander;
import domain.Pikachu;
import domain.Pokemon;
import domain.Squirtle;

public class App {
    public static void main(String[] args) throws Exception {
        Pikachu pikachu = new Pikachu("Pikachu", 1500, 112);
        Charmander charmander = new Charmander("Pikachu", 800, 90);
        Squirtle squirtle = new Squirtle("Pikachu", 790, 87);

        List<Pokemon> pokemons = Arrays.asList(pikachu, charmander, squirtle);

            for (Pokemon pokemon : pokemons){
                pokemon.attack();
            }
    }
}
