// Add responsiveness to the navbar
const navbar = document.querySelector('.navbar');
const navLinks = document.querySelector('.nav-links');

window.addEventListener('scroll', () => {
    if (window.scrollY > 50) {
        navbar.style.backgroundColor = '#0081a7';
        navLinks.style.marginTop = '0';
    } else {
        navbar.style.backgroundColor = 'transparent';
        navLinks.style.marginTop = '10px';
    }
});
