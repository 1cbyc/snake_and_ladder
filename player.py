class Player:
    def __init__(self, name):
        self.name = name
        self.position = 1

    def move(self, roll, board):
        new_position = self.position + roll
        if new_position > board.size:
            new_position = self.position
        if board.is_snake(new_position):
            new_position = board.get_snake_end(new_position)
        elif board.is_ladder(new_position):
            new_position = board.get_ladder_end(new_position)
        self.position = new_position
