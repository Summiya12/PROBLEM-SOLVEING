let person1 = {
    name: 'maisha', friend: 'mouly'
}
let person2 = {
    name: 'mouly', friend: 'maisha'
}
function isBestFriend() {
    if (person1.name == person2.friend && person1.friend == person2.name) {
        return true;
    } else {
        return false;
    }
}

console.log(isBestFriend(person1, person2));