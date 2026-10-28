import pickle

class Movie:
    def __init__(self, title, rating):
        self.title = title
        self.rating = rating
        
movie1 = Movie("아이언맨", 9.8)
movie2 = Movie("스파이더맨", 9.7)
my_movies = [movie1, movie2]

with open("movie_obj.p", "wb") as outfile:
    pickle.dump(my_movies, outfile)
    
with open("movie_obj.p", "rb") as infile:
    loaded_movies = pickle.load(infile)
    
for movie in loaded_movies:
    print(f"영화 제목: {movie.title}, 평점: {movie.rating}")
    
print(loaded_movies[1].title)