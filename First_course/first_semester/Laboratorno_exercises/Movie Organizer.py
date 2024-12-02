print("Welcome to our movie organizer! Here you can input movie name and its rating and the program will organize it all for you.")
amount_movies = int(input("Enter the amount of movies you want to organize: "))
movie_rating = []
film_dict = {}
for i in range(amount_movies):
    movie_name = input("Enter a movie name: ")
    film_rating = float(input("Enter the movie rating: "))
    if type(movie_name) == str and type(film_rating) == float:
        movie_rating.append((movie_name, film_rating))
print("The list with films is ",movie_rating)
for movie in movie_rating:
    film_dict[movie[1]] = movie[0]
print("The organized dictionary with films is ",film_dict)
