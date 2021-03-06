..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-vzstorage:

.. list-table:: Description of Virtuozzo Storage volume driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``vzstorage_default_volume_format`` = ``raw``
     - (String) Default format that will be used when creating volumes if no volume format is specified.
   * - ``vzstorage_mount_options`` = ``None``
     - (List) Mount options passed to the vzstorage client. See section of the pstorage-mount man page for details.
   * - ``vzstorage_mount_point_base`` = ``$state_path/mnt``
     - (String) Base dir containing mount points for vzstorage shares.
   * - ``vzstorage_shares_config`` = ``/etc/cinder/vzstorage_shares``
     - (String) File with the list of available vzstorage shares.
   * - ``vzstorage_sparsed_volumes`` = ``True``
     - (Boolean) Create volumes as sparsed files which take no space rather than regular files when using raw format, in which case volume creation takes lot of time.
   * - ``vzstorage_used_ratio`` = ``0.95``
     - (Floating point) Percent of ACTUAL usage of the underlying volume before no new volumes can be allocated to the volume destination.
