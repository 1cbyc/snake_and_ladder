class Board:
    def __init__(self, size=100):
        self.size = size
        self.snakes = {16: 6, 47: 26, 49: 11, 56: 53, 62: 19, 64: 60, 87: 24, 93: 73, 95: 75, 98: 78}
        self.ladders = {1: 38, 4: 14, 9: 31, 21: 42, 28: 84, 36: 44, 51: 67, 71: 91, 80: 100}

    def is_snake(self, position):
        return position in self.snakes

    def is_ladder(self, position):
        return position in self.ladders

    def get_snake_end(self, position):
        return self.snakes.get(position, position)

    def get_ladder_end(self, position):
        return self.ladders.get(position, position)
