using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun_controller : ExtendedCustomMonoBehavior
{
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_COMPONENT_PROVIDER player_component_provider;

    [Header("Bullet settings")]
    public float bulletForce = 400.0f;

    [Space(15)]
    [Header("GUN AMMO DATA")]
    private int CurrentAmmo;
    public int Ammo;
    public bool OutOfAmmo;

    


    public AudioSource shootAudioSource;
    public AudioSource MainAudioSource;

    [System.Serializable]
    public class spawn_points
    {
        public Transform bulletSpawnPoint;

    }

    public spawn_points BulletSpawnPoint;

    [System.Serializable]
    public class gun_sound_clips
    {
        public AudioClip ShootSound;
        public AudioClip ReloadSoundoutOfAmmo;
        public AudioClip AimSound;


    }

    public gun_sound_clips SoundClipsGun;

    [System.Serializable]
    public class bullet_prefab
    {
        public Transform bulletPrefab;

       
    }

    public bullet_prefab bullet_prefabes;

    public GameObject nozil_flash_prefab;

    private void Start()
    {
      //  shootAudioSource.clip = SoundClipsGun.ShootSound;
    }

    private void Update()
    {
        
        if(Ammo  == 0)
        {
            OutOfAmmo = true;

        }
        else
        {
            OutOfAmmo = false;
        }
    }

    
    public void fire()
    {
        if (!OutOfAmmo)
        {
            var bullet = (Transform)Instantiate
                (
                bullet_prefabes.bulletPrefab,
                BulletSpawnPoint.bulletSpawnPoint.transform.position,
                BulletSpawnPoint.bulletSpawnPoint.transform.rotation
                );

            Instantiate(nozil_flash_prefab, BulletSpawnPoint.bulletSpawnPoint.transform.position,BulletSpawnPoint.bulletSpawnPoint.transform.rotation);
            
             
            bullet.GetComponent<Rigidbody>().velocity = bullet.transform.forward * bulletForce;

            Ammo--;
        }
    }
}
