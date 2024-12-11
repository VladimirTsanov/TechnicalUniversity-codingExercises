class Food:
    def __init__(self, name, crabs, protein, fat):
        self.name = name
        self.crabs = crabs
        self.protein = protein
        self.fat = fat

    def calories(self):
        calc_calories_total = 0
        for x in (self.crabs, self.protein, self.fat):
            if isinstance(x, (float, int)):
                if x == self.fat:
                    calc_calories_total += x * 9
                elif x == self.crabs or x == self.protein:
                    calc_calories_total += x * 4
        return calc_calories_total

    def __str__(self):
        return f"{self.name} (Calories: {self.calories()} kcal)"


class Recipe:
    def __init__(self, name):
        self.name = name
        self.ingredients = []

    def add_ingredient(self, food):
        if isinstance(food, Food):
            self.ingredients.append(food)
        else:
            raise ValueError("Ingredient must be an instance of Food.")

    def calories_calc(self):
        return sum(ingredient.calories() for ingredient in self.ingredients)

    def __str__(self):
        return f"Recipe: {self.name}, Total Calories: {self.calories_calc()} kcal"


def main():
    try:
        n = int(input("Enter the number of recipes (between 5 and 14): "))
        if n <= 4 or n >= 15:
            raise ValueError("The number of recipes must be greater than 4 and less than 15.")

        recipes = []

        for i in range(1, n + 1):
            recipe_name = input(f"Enter the name for recipe {i}: ")
            recipe = Recipe(recipe_name)
            ingredient_count = int(input(f"Enter the number of ingredients for {recipe_name}: "))

            for j in range(ingredient_count):
                food_name = input(f"Enter the name of ingredient {j + 1}: ")
                try:
                    crabs = float(input(f"Enter the carbs for {food_name} (in grams): "))
                    protein = float(input(f"Enter the protein for {food_name} (in grams): "))
                    fat = float(input(f"Enter the fat for {food_name} (in grams): "))

                    if crabs < 0 or protein < 0 or fat < 0:
                        raise ValueError("Nutritional values cannot be negative.")

                    food = Food(food_name, crabs, protein, fat)
                    recipe.add_ingredient(food)

                except ValueError as e:
                    print(f"Error: {e}")
                    continue

            recipes.append(recipe)

        print("\nRecipes and their total calories:")
        for recipe in recipes:
            print(recipe)

    except ValueError as e:
        print(f"Error: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")


if __name__ == "__main__":
    main()
