using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement;
using UnityEngine.ResourceManagement.AsyncOperations;
public class bow_controller : MonoBehaviour
{
    public GameObject bow_arow;
    public Animator bow_animation_controller;

    private bool vertical_bow_shoot = false;

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_COMPONENT_PROVIDER player_component_provider_script;


    [Inject(InjectFrom.Anywhere)]
    public playerjoymovement playerjoymovement_for_gun_movement_animation;
    //animation paramater acess code
    private static int horthash = Animator.StringToHash("x");
    private static int verthash = Animator.StringToHash("y");

    private static int fire_arrow = Animator.StringToHash("fire_rifil");
    private static int aim_arrow = Animator.StringToHash("aim");

   // public Transform arrow_prefab;
    public Transform arrowspanpoint;
    public Transform arrow_rotation;
    public float arrowforce = 20.0f;


    //addressable assert code
    public AssetReference arrow_bullet_prefab;
    private GameObject arrow;

    public void Start()
    {
        bow_arow = GameObject.FindWithTag("n");
        bow_animation_controller = gameObject.GetComponent<Animator>();


        // addressable assert code
        arrow_bullet_prefab.LoadAssetAsync<GameObject>().Completed += arrow_bomb_loaded;

    }

    private void Update()
    {

        bow_animation_controller.SetFloat(horthash, playerjoymovement_for_gun_movement_animation.h_joy, 0.1f, Time.deltaTime);
        bow_animation_controller.SetFloat(verthash, playerjoymovement_for_gun_movement_animation.y_joy, 0.1f, Time.deltaTime);

        Debug.Log("dhana...........................................................ddddd");
    }

    public void PLAY_ARCHARY_PLAYER_FIRE_ARROW()
    {
       
       
            //player_component_provider_script.BOW_PLAYER.transform.position = vertical_bow_position.position;
            bow_animation_controller.SetTrigger(fire_arrow);



       // shoot_arrow();

           // player_component_provider_script.BOW_PLAYER.transform.position = horizontal_bow_position.position;
           
        
    }


    public void PLAY_ARCHARY_PLAYER_AIM_IN_VERTICAL_ARROW()
    {
        bow_animation_controller.SetBool(aim_arrow, true);
       // player_component_provider_script.BOW_PLAYER.transform.position = vertical_bow_position.position;
        

    }

    public void PLAY_ARCHARY_PLAYER_AIM_OUT_VERTICAL_ARROW()
    {
        bow_animation_controller.SetBool(aim_arrow, false);
       // player_component_provider_script.BOW_PLAYER.transform.position = horizontal_bow_position.position;
       

    }

    public void enable_arrow()
    {
        bow_arow.SetActive(true);
    }


    public void disable_arrow()
    {
        bow_arow.SetActive(false);
        shoot_arrow();
    }


    public void shoot_arrow()
    {
        //  var arrows  =(Transform)Instantiate(arrow_prefab, arrow_rotation.transform.position,arrow_rotation.transform.rotation);
        //  arrows.GetComponent<Rigidbody>().velocity = arrowspanpoint.forward * arrowforce;



        //addressable assert code
        //  arrow_bullet_prefab.InstantiateAsync(arrow_rotation.transform.position, arrow_rotation.transform.rotation).Completed += arrow_bomb_loaded;

        arrow = (GameObject) GameObject.Instantiate(arrow_bullet_prefab.Asset, arrow_rotation.transform.position, arrow_rotation.transform.rotation);
        arrow.GetComponent<Rigidbody>().velocity = arrowspanpoint.forward * arrowforce;

    }


    private void arrow_bomb_loaded(AsyncOperationHandle<GameObject> obj)
    {
        // In a production environment, you should add exception handling to catch scenarios such as a null result.
      //  arrow = obj.Result;
        if (obj.Status == AsyncOperationStatus.Succeeded)
        {
            //arrow.GetComponent<Rigidbody>().velocity = arrowspanpoint.forward * arrowforce;

        }

        Debug.Log("arrow bulled loaded dhana ");
    }


    private void OnDestroy()
    {
        arrow_bullet_prefab.ReleaseAsset();

     
    }


    private void OnEnable()
    {

        // addressable assert code
        arrow_bullet_prefab.LoadAssetAsync<GameObject>().Completed += arrow_bomb_loaded;
    }
    private void OnDisable()
    {
        arrow_bullet_prefab.ReleaseAsset();
         


    }
}
