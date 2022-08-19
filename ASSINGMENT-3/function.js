/**
 *PROBLEM:1
 *radianToDegree()
 *1 rad = 57.296 degree
 */




function radianToDegree(radians) {
    if (typeof radians != 'number') {
        return 'PLEASE ENTER A VALID INPUT';
    }
    const Degree = radians * 57.296;
    return Degree;

}

//console.log(radianToDegree(4));


/**
 *PROBLEM:2
 * isJavaScriptFile()
 * file extension should be .js
 */


function isJavaScriptFile(strings) {
    if (strings != 'string') {
        return 'Please enter a string value';
    }
    const doesExist = strings.endsWith('.js');
    return doesExist;


}

//console.log(isJavaScriptFile('app.js'));


/**
 * PROBLEM:3
 * oilPrice()
 * digel=114
 * patrol=130
 * octen=135
 */

function oilPrice(a, b, c) {
    if (typeof a != 'number' || typeof b != 'number' || c != 'number') {
        return 'Invalid input';

    }
    const total = (a * 114) + (b * 130) + (c * 135);
    return total;

}

//console.log(oilPrice(30, 20, 10));


/**
 * PROBLEM:4
 * publicBusFare()
 * Bus ticket 1 ta = 250
 * Bus capacity = 50
 * Microbus capacity = 11
 */

function publicBusFare(person) {
    if (typeof person != 'number') {
        return 'please enter number as an input';

    }
    const bus = (person % 50);

    if (bus > 11) {
        const busfare = (bus % 11) * 250;
        return busfare;
    }
    else if (bus < 11) {
        return bus * 250;
    }
    else {
        return 0;
    }

}

//console.log(publicBusFare(365));


/**
 * PROBLEM : 5
 * isBestFriend()
 * Takes two obj as perameter
 * 
 */



let person1 = {
    name: 'abul', friend: 'bulbul'
}
let person2 = {
    name: 'bulbul', friend: 'abul'
}
function isBestFriend(person1, person2) {
    if (typeof person1 != 'object' || typeof person2 != 'object') {
        return 'Enter valid input';
    }

    if (person1.name == person2.friend && person1.friend == person2.name) {
        return true;
    } else {
        return false;
    }
}

//console.log(isBestFriend(person1, person2));
