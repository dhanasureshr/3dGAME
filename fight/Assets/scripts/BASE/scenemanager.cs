using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class scenemanager : MonoBehaviour
{
    public int Total_levels = 10;

    public int Game_level_number;

    public int gameLevelNum = 0;
    public IEnumerator get_level_count_update_from_game_manager()
    {
        yield return new WaitForSeconds(10);

    }

    public void GoNextLevel()
    {
        gameLevelNum++;
        // load the level (the array index starts at 0, but we start
        // counting game levels at 1 for clarity’s sake)
        LoadLevel(gameLevelNum);

        // increase our game level index counter
        //gameLevelNum++;
    }
    private void LoadLevel(int indexNum)
    {
        SceneManager.LoadScene(indexNum);
    }


    public void ResetGame()
    {
        // reset the level index counter
        gameLevelNum = 0;
    }

}
