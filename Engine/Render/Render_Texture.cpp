#include <SDL.h>
#include <SDL_image.h>
#include <string>

class LRTexture{
    public:
        //Initializes variables
        LRTexture();

        //Deallocates memory
        ~LRTexture();

        //Loads image at specified path
        bool loadFromFile(std::string path);

        //Deallocates texture
        void free();

        //Renders texture at given point
        void render(int x, int y);

        //Gets image dimensions
        int getWidth();
        int getHeight();
    private:
        //Variable for texture
        SDL_Texture tTexture;
        //Width/Height
        int tW, tH;
};

LRTexture::LRTexture(){

    tTexture = NULL;
    tW = 0;
    tH = 0;

}

LRTexture::~LRTexture(){
    free();
}

LRTexture::loadFromFile(std::string)

LRTexture::free(){}
