const navbar = document.querySelector('.navbar ul');
const menuToggle = document.querySelector('.navbar .toggle-hamburger input');

menuToggle.addEventListener('click', function() {
    navbar.classList.toggle('slide');
});