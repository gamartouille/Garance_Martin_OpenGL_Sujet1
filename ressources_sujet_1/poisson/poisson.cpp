vector<glm::vec3> poisson_vertex_buffer = {
        glm::vec3(-0.5f, 1.0f,-0.5f), // triangle 1 : begin
        glm::vec3(-0.5f, 1.0f, 0.5f),
        glm::vec3(-0.5f,-1.0f,-0.5f),

        glm::vec3(-0.5f,-1.0f,-0.5f), // triangle 2 : begin
        glm::vec3(-0.5f, 1.0f, 0.5f),
        glm::vec3(-0.5f,-1.0f, 0.5f),

        glm::vec3(-0.5f, 1.0f,-0.5f),// triangle 3 : begin
        glm::vec3(-0.5f,-1.0f,-0.5f),
        glm::vec3( 0.0f, 0.0f, 0.0f),

        glm::vec3(-0.5f, 1.0f, 0.5f),// triangle 4 : begin
        glm::vec3(-0.5f, 1.0f,-0.5f),
        glm::vec3( 0.0f, 0.0f, 0.0f),

        glm::vec3(-0.5f,-1.0f, 0.5f),// triangle 5 : begin
        glm::vec3(-0.5f, 1.0f, 0.5f),
        glm::vec3( 0.0f, 0.0f, 0.0f),

        glm::vec3(-0.5f,-1.0f,-0.5f),// triangle 6 : begin
        glm::vec3(-0.5f,-1.0f, 0.5f),
        glm::vec3( 0.0f, 0.0f, 0.0f),

        glm::vec3( 0.0f, 0.0f, 0.0f),// triangle 7 : begin
        glm::vec3( 1.0f, 0.5f,-0.5f),
        glm::vec3( 1.0f, 0.5f, 0.5f),

        glm::vec3( 0.0f, 0.0f, 0.0f),// triangle 8 : begin
        glm::vec3( 1.0f, 0.5f, 0.5f),
        glm::vec3( 1.0f,-0.5f, 0.5f),

        glm::vec3( 0.0f, 0.0f, 0.0f),// triangle 9 : begin
        glm::vec3( 1.0f,-0.5f, 0.5f),
        glm::vec3( 1.0f,-0.5f,-0.5f),

        glm::vec3( 0.0f, 0.0f, 0.0f),// triangle 10 : begin
        glm::vec3( 1.0f,-0.5f,-0.5f),
        glm::vec3( 1.0f, 0.5f,-0.5f),

        glm::vec3( 1.0f, 0.5f, 0.5f),// triangle 11 : begin
        glm::vec3( 1.0f, 0.5f,-0.5f),
        glm::vec3( 2.0f, 0.0f, 0.0f),

        glm::vec3( 1.0f, 0.5f, 0.5f),// triangle 12 : begin
        glm::vec3( 2.0f, 0.0f, 0.0f),
        glm::vec3( 1.0f,-0.5f, 0.5f),

        glm::vec3( 1.0f,-0.5f, 0.5f),// triangle 13 : begin
        glm::vec3( 2.0f, 0.0f, 0.0f),
        glm::vec3( 1.0f,-0.5f,-0.5f),

        glm::vec3( 1.0f,-0.5f,-0.5f),// triangle 14 : begin
        glm::vec3( 2.0f, 0.0f, 0.0f),
        glm::vec3( 1.0f, 0.5f,-0.5f)
    };

    vector<glm::vec2> poisson_uv_buffer = {
        glm::vec2(0.0f,  0.0f), // triangle 1 : begin
        glm::vec2(0.25f, 0.0f),
        glm::vec2(0.0f,  0.25f),

        glm::vec2(0.0f,  0.25f), // triangle 2 : begin
        glm::vec2(0.25f, 0.0f),
        glm::vec2(0.25f, 0.25f),

        glm::vec2(0.0f,  0.0f), // triangle 3 : begin
        glm::vec2(0.0f,  0.25f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  0.25f), // triangle 4 : begin
        glm::vec2(0.0f,  0.0f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  0.0f), // triangle 5 : begin
        glm::vec2(0.0f,  0.25f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  0.25f), // triangle 6 : begin
        glm::vec2(0.0f,  0.0f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  0.125f), // triangle 7 : begin
        glm::vec2(0.25f, 0.0f),
        glm::vec2(0.25f, 0.25f),

        glm::vec2(0.73f, 0.125f), // triangle 8 : begin
        glm::vec2(1.0f,  0.0f),
        glm::vec2(1.0f,  0.25f),

        glm::vec2(0.0f,  0.125f), // triangle 9 : begin
        glm::vec2(0.25f, 0.25f),
        glm::vec2(0.25f, 0.0f),

        glm::vec2(0.73f, 0.125f), // triangle 10 : begin
        glm::vec2(1.0f,  0.25f),
        glm::vec2(1.0f,  0.0f),

        glm::vec2(0.0f,  0.25f), // triangle 11 : begin
        glm::vec2(0.0f,  0.0f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  0.73f), // triangle 12 : begin
        glm::vec2(0.25f, 0.875f),
        glm::vec2(0.0f,  1.0f),

        glm::vec2(0.0f,  0.25f), // triangle 13 : begin
        glm::vec2(0.0f,  0.0f),
        glm::vec2(0.25f, 0.125f),

        glm::vec2(0.0f,  1.0f), // triangle 14 : begin
        glm::vec2(0.25f, 0.875f),
        glm::vec2(0.0f,  0.73f),
    };
