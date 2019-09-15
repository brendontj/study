import axios from "axios";

// import axios from 'axios';

// class Api {
//     static async getUserInfo(username){
//         try {
//             const response = await axios.get(`https://api.github.com/users/${username}`);
//             console.log(response);
//         } catch (err) {
//             console.warn('Erro na Api');
//         }
//     }
// }

// Api.getUserInfo('brendonhpssdsd');



// Start Ex1 
// const umPorSegundo = (param) => new Promise((resolve, reject) => {
//     setTimeout( () => {resolve(param) },1000);
// });
    

// async function executaPromisse() {
    
//     console.log(await umPorSegundo('1s'));
//     console.log(await umPorSegundo('2s'));
//     console.log(await umPorSegundo('3s'));  
// }

// executaPromisse();

// Start Ex2

// import axios from 'axios';


// async function getUserFromGithub(user) {
//     try {
//         const response = await axios.get(`https://api.github.com/users/${user}`);
//         console.log(response);
//     } catch {
//         console.warn('Usuario não encontrado');
//     }
// }
// getUserFromGithub('diego3g');
//getUserFromGithub('diego3g124123');

// Start Ex3


// import axios from 'axios';
// class Github {
//     static async getRepositories(repo){
//         try {
//            const response = await axios.get(`https://api.github.com/repos/${repo}`);           
//            console.log(response.data);
//         } catch {
//             console.warn('Deu ruim');
//         }
//     }
// }

// Github.getRepositories('rocketseat/rocketseat.com.br');
// Github.getRepositories('brendonhps/todo-app');

// Ex 4 

async function buscaUsuario (user) {
    try {
    const response = await axios.get(`https://api.github.com/users/${user}`);
    console.log(response.data);
    } catch {
    console.warn('Usuario nao existe');
    }
}

buscaUsuario('brendontj');