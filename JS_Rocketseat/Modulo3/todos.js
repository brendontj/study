
var buttonAdd = document.getElementById('addButton');
var inputElement = document.querySelector('input');
var listElement = document.querySelector('ul');


var todos = JSON.parse(localStorage.getItem('list_todos')) || [];
renderTodo();

function renderTodo  () {

    listElement.innerHTML = '';

    for (todo of todos) {

        var newLine = document.createElement('li');
        var textLine = document.createTextNode(todo);
        var deleteLine = document.createElement('a');
        var textDelete = document.createTextNode('Excluir');
        deleteLine.setAttribute('href','#');

        var pos = todos.indexOf(todo);
        deleteLine.setAttribute('onclick', 'deleteTodo(' + pos + ')');
        deleteLine.appendChild(textDelete);
        newLine.appendChild(textLine);
        newLine.appendChild(deleteLine);
        listElement.appendChild(newLine);
    }
   
}

buttonAdd.onclick = function() {
    
    var textToAdd = inputElement.value;
    todos.push(textToAdd);
    renderTodo();
    inputElement.value = '';
    saveToStorage();
 
}


function deleteTodo (pos) {
    todos.splice(pos,1);
    renderTodo();
    saveToStorage();
}

function saveToStorage() {
    localStorage.setItem('list_todos', JSON.stringify(todos));
}