<!DOCTYPE html>
<html>
<head>
  <title>Earth Orbit Simulation</title>
  <style>
    canvas {
      border: 1px solid #000;
    }
  </style>
</head>
<body>
  <canvas id="canvas" width="800" height="800"></canvas>

  <script>
    // Set up canvas and context
    const canvas = document.getElementById('canvas');
    const ctx = canvas.getContext('2d');
    const centerX = canvas.width / 2;
    const centerY = canvas.height / 2;

    // Define properties of the orbit
    const orbitRadius = 200;
    const orbitSpeed = 0.01;
    let angle = 0;

    // Define properties of the Earth
    const earthRadius = 20;
    const earthColor = '#00aaff';

    // Animation loop
    function animate() {
      // Clear canvas
      ctx.clearRect(0, 0, canvas.width, canvas.height);

      // Calculate Earth's position
      const x = centerX + Math.cos(angle) * orbitRadius;
      const y = centerY + Math.sin(angle) * orbitRadius;

      // Draw Earth
      ctx.beginPath();
      ctx.arc(x, y, earthRadius, 0, 2 * Math.PI);
      ctx.fillStyle = earthColor;
      ctx.fill();

      // Update angle for next frame
      angle += orbitSpeed;

      // Request next frame
      requestAnimationFrame(animate);
    }

    // Start animation
    animate();
  </script>
</body>
</html>
