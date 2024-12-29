# i intend to state the main game logic and player handling here 
from player import Player
from board import Board
from dice import roll_dice

class Game:
    def __init__(self):
        self.board = Board()
        self.players = [Player("Player 1"), Player("Player 2")]
        self.turn = 0

    def play_turn(self):
        player = self.players[self.turn % 2]
        print(f"{player.name}'s turn (Position: {player.position})")
        roll = roll_dice()
        print(f"{player.name} rolled a {roll}")
        player.move(roll, self.board)
        print(f"{player.name} is at {player.position}")
        if player.position == 100:
            return True
        return False

    def start_game(self):
        print("Welcome to the Snake and Ladder game!")
        while True:
            if self.play_turn():
                print(f"{self.players[self.turn % 2].name} wins!")
                break
            self.turn += 1
