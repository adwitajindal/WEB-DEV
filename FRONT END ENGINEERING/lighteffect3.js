const gallery = document.querySelector('.gallery'); 
const lightbox = document.getElementById("lightbox");
const lightboxImage = document.getElementById('lightbox-image'); 
const closeButton = document.getElementById('close-button');

// Open the lightbox when a thumbnail is clicked 
gallery.addEventListener('click', (e) =>
 { if (e.target.classList.contains("lightbox-trigger"))
  { lightbox.style.display = 'block'; lightboximage.src = e.target.src;

} 
});

// Close the lightbox when the close button is clicked 
closeButton.addEventListener('click', () => 
{ lightbox.style.display = 'none';})

// Close the lightbox when the background is clicked
lightbox.addEventListener('click', (e) => {
    if (e.target === lightbox) {
    lightbox.style.display = 'none';
    }
   });
   // Close the lightbox when the Escape key is pressed
   document.addEventListener('keydown', (e) => {
    if (e.key === 'Escape' && lightbox.style.display === 'block') {
    lightbox.style.display = 'none';
    }
   });