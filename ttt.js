const spaces = document.querySelectorAll('.space');
playerMove();

function playerMove() {
    
   spaces.forEach((space) => {
        space.addEventListener('click', () => {

            if(space.textContent !== '') {
                return;
            }

            space.textContent = 'X';

            computerMove();
        })
    })
}

function toggle() {
    const game = document.querySelector('.ttt-game');
    
    if(game.classList.contains('hidden')) {
        game.classList.toggle('hidden');
    }      
}

function computerMove() {
    let number;
    let computerSpace;

    let emptyFound = false;

    spaces.forEach((space) => {
        if(space.textContent === '') {
            emptyFound = true;
        }
    });

    if(!emptyFound) {
        return;
    }
    
    do {
        number = Math.floor(Math.random() * 9) + 1;
        computerSpace = document.getElementById(number.toString());
        console.log(number);
    } while (computerSpace.textContent !== '');

    computerSpace.textContent = 'O';
}