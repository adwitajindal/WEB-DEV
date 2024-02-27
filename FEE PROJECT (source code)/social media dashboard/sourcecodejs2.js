// Updated JavaScript with enhanced login functionality

var loggedIn = false;

function login() {
    var username = document.getElementById('username').value;
    var password = document.getElementById('password').value;
    var errorMessageElement = document.getElementById('errorMessage');

    // Basic check for username and password
    if (username === 'user' && password === 'password') {
        // Successful login
        errorMessageElement.innerHTML = ''; // Clear any previous error messages
        loggedIn = true;
        showMainContainer();
    } else {
        // Failed login
        errorMessageElement.innerHTML = 'Invalid username or password. Please try again.';
    }
}

function showMainContainer() {
    document.getElementById('loginForm').reset();
    document.getElementById('loginContainer').style.display = 'none';
    document.getElementById('mainContainer').style.display = 'block';
}