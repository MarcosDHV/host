body {
  font-family: Arial, sans-serif;
  background-color: #f0f0f0;
  animation: fade-in 2s;
}

h1 {
  color: #00698f;
  text-align: center;
  animation: slide-in 2s;
}

form {
  width: 50%;
  margin: 40px auto;
  padding: 20px;
  border: 1px solid #ccc;
  border-radius: 10px;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
  animation: zoom-in 2s;
}

label {
  display: block;
  margin-bottom: 10px;
  animation: bounce-in 2s;
}

input[type="text"] {
  width: 100%;
  height: 30px;
  margin-bottom: 20px;
  padding: 10px;
  border: 1px solid #ccc;
  animation: pulse-in 2s;
}

input[type="text"]:focus {
  border-color: #00698f;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.3);
  animation: glow-in 2s;
}

@keyframes fade-in {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}

@keyframes slide-in {
  0% {
    transform: translateX(-100%);
  }
  100% {
    transform: translateX(0);
  }
}

@keyframes zoom-in {
  0% {
    transform: scale(0.5);
  }
  100% {
    transform: scale(1);
  }
}

@keyframes bounce-in {
  0% {
    transform: translateY(-100%);
  }
  50% {
    transform: translateY(0);
  }
  100% {
    transform: translateY(-20%);
  }
}

@keyframes pulse-in {
  0% {
    transform: scale(0.8);
  }
  100% {
    transform: scale(1);
  }
}

@keyframes glow-in {
  0% {
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
  }
  100% {
    box-shadow: 0 0 20px rgba(0, 0, 0, 0.3);
  }
}
