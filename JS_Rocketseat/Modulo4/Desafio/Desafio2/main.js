

var buttonSelect = document.getElementById("myButton");
var inputSelect = document.getElementById("myInput");




function request (user) {
    axios.get("https://api.github.com/users/" + user + "/repos")
        .then(function(response) {
            // Adicionar lista de reps no HTML
            var data = response['data'];
            var divSelect = document.getElementById("listDiv");

            divSelect.innerHTML = "";
        
            var newList = document.createElement("ul");

            for (x in  data) {
                 var lineText = document.createTextNode ((data[x.toString()])['name']);
                 var newLine = document.createElement("li");
                 newLine.appendChild(lineText);
                 newList.appendChild(newLine);
            }
            divSelect.appendChild(newList);
            
        }) 
        .catch(function(error) {
            console.warn(error.response);
            if (error.response.status == 404){
                var divSelect = document.getElementById("listDiv");

                 divSelect.innerHTML = "";
                 alert("Usuario não existe");
            }
        });
}


buttonSelect.onclick = function() {
    var divSelect = document.getElementById("listDiv");
    var newList = document.createElement("ul");
    var lineText = document.createTextNode ("Carregando...");
    var newLine = document.createElement("li");

    newLine.appendChild(lineText);
    newList.appendChild(newLine);
    divSelect.appendChild(newList);

    request(inputSelect.value)
}


