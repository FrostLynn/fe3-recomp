#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C01198
// Address: 0x1c01198 - 0x1c01298
void sub_01C01198_0x1c01198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01198_0x1c01198");
#endif

    switch (ctx->pc) {
        case 0x1c011c8u: goto label_1c011c8;
        case 0x1c011f8u: goto label_1c011f8;
        case 0x1c01208u: goto label_1c01208;
        case 0x1c01218u: goto label_1c01218;
        case 0x1c01270u: goto label_1c01270;
        default: break;
    }

    ctx->pc = 0x1c01198u;

    // 0x1c01198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c01198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0119c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c011a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c011a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c011a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c011a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c011a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c011a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c011ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c011acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c011b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c011b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c011b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c011b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c011b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c011b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c011bc: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c011bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c011c0: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C011C0u;
    SET_GPR_U32(ctx, 31, 0x1C011C8u);
    ctx->pc = 0x1C011C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C011C0u;
    // 0x1c011c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C011C0u, 0x1C011C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C011C8u;
label_1c011c8:
    // 0x1c011c8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c011c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c011cc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c011ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c011d0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c011d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c011d4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c011d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c011d8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c011d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c011dc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c011dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c011e0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c011e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c011e4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c011e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c011e8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c011e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c011ec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c011ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c011f0: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C011F0u;
    SET_GPR_U32(ctx, 31, 0x1C011F8u);
    ctx->pc = 0x1C011F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C011F0u;
    // 0x1c011f4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C011F0u, 0x1C011F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C011F8u;
label_1c011f8:
    // 0x1c011f8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c011f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c011fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c011fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01200: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01200u;
    SET_GPR_U32(ctx, 31, 0x1C01208u);
    ctx->pc = 0x1C01204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01200u;
    // 0x1c01204: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01200u, 0x1C01208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01208u;
label_1c01208:
    // 0x1c01208: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c01208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c0120c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01210: 0xc70000a  jal         func_1C00028
    ctx->pc = 0x1C01210u;
    SET_GPR_U32(ctx, 31, 0x1C01218u);
    ctx->pc = 0x1C01214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01210u;
    // 0x1c01214: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00028u, 0x1C01210u, 0x1C01218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01218u;
label_1c01218:
    // 0x1c01218: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c01218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0121c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c0121cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c01220: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c01220u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c01224: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c01224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c01228: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c01228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c0122c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c0122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c01230: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c01230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c01234: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c01234u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c01238: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c01238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0123c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c0123cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c01240: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c01240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c01244: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c01244u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c01248: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c01248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0124c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c0124cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c01250: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c01250u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c01254: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c01254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c01258: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c01258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c0125c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c0125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01260: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c01260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c01264: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c01264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c01268: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01268u;
    SET_GPR_U32(ctx, 31, 0x1C01270u);
    ctx->pc = 0x1C0126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01268u;
    // 0x1c0126c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01268u, 0x1C01270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01270u;
label_1c01270:
    // 0x1c01270: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c01270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c01274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c01278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0127c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c0127cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c01284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c01288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0128c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0128cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c01290: 0x8700006  j           func_1C00018
    ctx->pc = 0x1C01290u;
    ctx->pc = 0x1C01294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01290u;
    // 0x1c01294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    sub_01C00018_0x1c00018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01298u;
}
