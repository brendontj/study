axios.get()
    .then(function(response) {
        console.log(response);
    }) 
    .catch(function(error) {
        console.warn(error);
    });